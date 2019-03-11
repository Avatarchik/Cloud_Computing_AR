using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;


public class placeMapScript : MonoBehaviour {

	public Button StartGameBtn;
	public Button PlaceGameObjectBtn;
	public Button PlaceNewBtn;

  	private ARPlaneManager ARPlaneManager;
    private ARPointCloudManager ARPointCloudManager;
    private ARPlane ARPlane;
    private ARPlaneMeshVisualizer ARPlaneMeshVisualizer;
    private ARPointCloud ARPointCloud;
    private ARPointCloudParticleVisualizer ARPointCloudParticleVisualizer;


	public void onClickPlaceGameObject ()
	{

		StartGameBtn.gameObject.SetActive (true);
		PlaceNewBtn.gameObject.SetActive (true);
		PlaceGameObjectBtn.gameObject.SetActive (false);


		ARPlaneManager = GameObject.Find("AR Session Origin").GetComponent<ARPlaneManager>();
        ARPointCloudManager = GameObject.Find("AR Session Origin").GetComponent<ARPointCloudManager>();
        Destroy (ARPointCloudManager);
        Destroy(ARPlaneManager);

        ARPlane = GameObject.FindGameObjectWithTag("arPlaneTag").GetComponent<ARPlane>();
        ARPlaneMeshVisualizer  = GameObject.FindGameObjectWithTag("arPlaneTag").GetComponent<ARPlaneMeshVisualizer>();
        Destroy(ARPlane);
        Destroy(ARPlaneMeshVisualizer);

        ARPointCloud = GameObject.FindGameObjectWithTag("arPointTag").GetComponent<ARPointCloud>();
        ARPointCloudParticleVisualizer = GameObject.FindGameObjectWithTag("arPointTag").GetComponent<ARPointCloudParticleVisualizer>();
        Destroy(ARPointCloud);
        Destroy(ARPlaneMeshVisualizer);
        Destroy(GameObject.FindGameObjectWithTag("arPointTag"));
	}

	public void onClickPlaceNew ()
	{
		SceneManager.LoadScene ("MultiplayerTankGame");
	}

}
