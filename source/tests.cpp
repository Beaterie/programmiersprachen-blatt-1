#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>
//234168

int gcd(int a, int b){
	if (a == b){
		return a;
	}
	else {
		if (a > b){
			for (int i = b; i >= 1; --i){
				if (a % i == 0 && b % i == 0){
					return i;
				}
			}
		}
		else{
			for (int i = a; i >= 1; --i){
				if (a % i == 0 && b % i == 0){
					return i;
				}
			}
		}
	}
}

TEST_CASE("describe_gcd", "[gcd]")
{
	REQUIRE(gcd(2,4) == 2);
	REQUIRE(gcd(6,9) == 3);
	REQUIRE(gcd(10,6) == 2);
	REQUIRE(gcd(3,7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
