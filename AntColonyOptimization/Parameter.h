#pragma once
#include <string>
#include <vector>

class Parameter
{
public:
	long int Lifetime;			//ant lifetime
	int FoodCapacity;			//maximum amount of food
	long int PheromoneQuantity;		//quantity of pheromone left by ant on each square during return to anthill
	long int PheromoneEvaporate;	//quantity of pheromone evaporating per round
	int ForwardProbability;		//p of ant moving forward
	int RightProbability;		//p of ant moving right
	int LeftProbability;		//p of ant moving left
	int BackwardProbability;	//p of ant moving backwards
	int MaximumMovementRetries;	//maximum retries in case movement is not legal (exceeding playground boders)
	int EnvironmentSizeCols;	//extension of playground in columns
	int EnvironmentSizeRows;	//extension of playground in rows
	int AnthillFood;			//amount of food stored in anthill at start-time
	int FoodQuantity;			//amount of food placed somewhere on the playground at start-time
	long int MaxCycles;		//maximum amount of simulation cycles to be executed during each individual run
	long int NumberOfSimulations; //number of individual simulations comprising MaxCycles of individual cycles
	long int NumberOfAnthills;  //number of anthill instances
	long int NumberOfFood;	//number of food depot instances

	Parameter();
	~Parameter();
private:
	void set_parameter(std::string);
	void load_parameters(std::string);

	std::string name;

	/*
	std::vector<std::string> paramvec {
		"ant_food_capacity",
		"ant_forward_probability",
		"ant_left_probability",
		"ant_right_probability",
		"ant_backward_probability",
		"env_size_cols",
		"env_size_rows",
		"start_anthill_food",
		"start_food_quantity"
	};
	*/

};

