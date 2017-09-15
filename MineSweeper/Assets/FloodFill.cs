using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking.Types;

public class FloodFill : MonoBehaviour {
    private Grid _grid;

    private void Start()
    {
        _grid = GameObject.FindGameObjectWithTag("GridSpawner").GetComponent<Grid>();
        
    }

    public bool DestroyAdjacentTiles(int x, int y) {
          

        
        if(x < 0 || x > _grid.GridArray.GetLength(0) -1 || y < 0|| y > _grid.GridArray.GetLength(1) -1) {
       
            return false;
        }
      
        _grid.Tile = _grid.GridArray[x, y];

        if (_grid.Tile == null || _grid.GridArray[x,y].CompareTag("Bomb"))
        {
            return false;
        }
        Destroy(_grid.Tile);
        _grid.GridArray[x,y] = null;
       
        DestroyAdjacentTiles(x-1, y);
        DestroyAdjacentTiles(x+1, y);
        DestroyAdjacentTiles(x, y-1);
        DestroyAdjacentTiles(x, y+1);
       
        return true;
    }
    
}




