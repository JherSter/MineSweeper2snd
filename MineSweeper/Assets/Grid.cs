using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Grid : MonoBehaviour
{

    public GameObject[,] GridArray = new GameObject[35, 20];
    [SerializeField] public GameObject Tile, Bomb;
    [SerializeField] private GameObject _spawner;
    public int BombCount = 0;

    private void Start()
    {
        SpawnerGrid();
    }

    public void SpawnerGrid()
    {

        for (var x = 0; x < GridArray.GetLength(0); x++)
        {
            for (var y = 0; y < GridArray.GetLength(1); y++)
            {

                GridArray[x, y] = Instantiate(Random.Range(0, 100) < 20 ? Bomb : Tile, new Vector3(x, 0, y),
                    Quaternion.identity);
                GridArray[x, y].transform.parent = _spawner.transform;

            }

        }
    }

       public void CheckBombs()
    {
        for (var y = 0; y < GridArray.GetLength(1); y++)
        {
            for (var x = 0; x < GridArray.GetLength(0); x++)
            {
                for (var ny = y - 1; ny <= y + 1; ny++)
                {
                    for (var nx = x - 1; nx <= x + 1; nx++)
                    {
                        if (ny > GridArray.GetLength(1) - 1 || ny < 0 || nx > GridArray.GetLength(0) - 1 || nx < 0)
                            continue;

                        if (GridArray[x, y].name == "Bomb") continue;

                        if (GridArray[nx, ny].name == "Bomb")
                        {
                            BombCount++;
                        }
                    }
                }
            }
        }
    }
}

   

