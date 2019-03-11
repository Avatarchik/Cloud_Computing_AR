using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class NetworkManagerScript : MonoBehaviour
{

    public Text TextInfos;
    private Transform SpawnPoint1;
    private Transform SpawnPoint2;

    // Use this for initialization
    void Start()
    {

        PhotonNetwork.ConnectUsingSettings("v01");

        SpawnPoint1 = GameObject.FindGameObjectWithTag("sp1").transform;
        SpawnPoint2 = GameObject.FindGameObjectWithTag("sp2").transform;

    }

    // Update is called once per frame
    void Update()
    {

 

        if (PhotonNetwork.connectionStateDetailed.ToString() != "Joined")
        {
            TextInfos.text = PhotonNetwork.connectionStateDetailed.ToString();
        }
        else
        {
            TextInfos.text = "Connected to " + PhotonNetwork.room.name + " Player(s) Online: " + PhotonNetwork.room.PlayerCount;
        }

    }


    void OnConnectedToMaster()
    {
        Debug.Log("Connected with Master");
        PhotonNetwork.JoinLobby();
    }

    void OnJoinedLobby()
    {
        RoomOptions MyRoomOptions = new RoomOptions();
        MyRoomOptions.MaxPlayers = 2;
        PhotonNetwork.JoinOrCreateRoom("Room1", MyRoomOptions, TypedLobby.Default);

        Debug.Log("Connected with Lobby");

    }

    void OnJoinedRoom()
    {

        if (PhotonNetwork.playerList.Length > 1)
        {
            StartCoroutine(SpawnMyPlayer());
        }
        else
        {
            StartCoroutine(SpawnMyPlayer2());
        }
    }

    IEnumerator SpawnMyPlayer()
    {
        yield return new WaitForSeconds(1);

        float xPositon = SpawnPoint1.position.x;
        float zPositon = SpawnPoint1.position.z;

        Vector3 position = new Vector3(xPositon,-1.65f, zPositon);

        GameObject MyPlayer = PhotonNetwork.Instantiate("Tank", position, Quaternion.identity, 0) as GameObject;
    }

    IEnumerator SpawnMyPlayer2()
    {
        yield return new WaitForSeconds(1);

        float xPositon = SpawnPoint2.position.x;
        float zPositon = SpawnPoint2.position.z;
        Vector3 position = new Vector3(xPositon, -1.65f, zPositon);

        //MyPlayer1 = PhotonNetwork.Instantiate("Tank", SpawnPoint2.position, Quaternion.identity, 0) as GameObject;
        GameObject MyPlayer = PhotonNetwork.Instantiate("Tank", position, Quaternion.identity, 0) as GameObject;
    }

}
