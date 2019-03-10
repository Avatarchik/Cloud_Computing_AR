using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthScript : MonoBehaviour {

	public int health = 100;
	PhotonView view;
	Text TxtHealth;
	Text TxtHealthOther;


	// Use this for initialization
	void Start () {

		view = GetComponent<PhotonView> ();
		TxtHealth = GameObject.Find ("TxtHealth").GetComponent<Text> ();
		TxtHealthOther = GameObject.Find ("TxtHealthOther").GetComponent<Text> ();
	
	}

	void OnCollisionEnter (Collision Col)
	{

		if (Col.gameObject.tag == "Bullet" && view.isMine) 
		{
			health -= 10;
			TxtHealth.text = "Player 1: " + health + "%";
			view.RPC ("damageOther", PhotonTargets.Others, health);
		}

	}


	// Update is called once per frame
	void Update () {

		if (health <= 0) 
		{
			view.RPC ("destroyGA", PhotonTargets.All);
		}
		
	}

	[PunRPC]
	void destroyGA ()
	{
		Destroy (gameObject);
	}


	[PunRPC]
	void damageOther(int health)
	{
		TxtHealthOther.text = "Player 2; " + health + "%";
	}
}
