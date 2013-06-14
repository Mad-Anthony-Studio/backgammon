#include "bintree.h"
#include <cstdlib>

/*
 *************************************************************
 *
 * search() - given a value ... find it
 *
 * loop through, placing tmp at the correct position
 * return a BinNode
 *
 *************************************************************
 */

BinNode * BinNode :: search(int v){

	BinNode *tmp = this;

        while(tmp -> right != NULL && tmp -> left != NULL){

                if(v > tmp -> value){

                        if( tmp -> right != NULL){

                                //go right
                                tmp = tmp -> right;

                        }else{

                                //we're here
                                tmp = tmp -> right;

                        }

                }else{

                        if( tmp -> left != NULL){

                                //go left
                                tmp = tmp -> left;

                        }else{

                                //we're here
                                tmp = tmp -> left;

                        }

                }

        }

	return tmp;

}

/*
 *************************************************************
 *
 * search() - given a value ... find it
 *
 * custom search for RM 
 * return a Value
 *
 *************************************************************
 */



bool BinNode :: RmSearch(int value)
{
	
	if(this == NULL)
	{
		return(false);
	}
	
	else
	{
		return(this -> Rmsearch(value));
	}

}

bool BinNode :: Rmsearch(int value)
{
		
	if(value == this -> getValue())
	{
		BinNode *temp = this;
		return(temp)	
	}

	else if(value < this -> value)
	{
		if(left == NULL)
		{	
			return(false);
		}
		
		else
		{
		return(left -> Rmsearch(value))
		}
	}
	
	else if(value > this -> value);
	{
		if(right == NULL)
		{
			return(false)
		}
		
		else 
		{
			return(right -> Rmsearch(value)); 	
		}		
	}
	return(false);
}

