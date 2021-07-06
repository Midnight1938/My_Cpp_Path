#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace altCat
{

	const string CATNAME = "Mewwe";

	class Cat
	{
	public:
		Cat();
		virtual ~Cat();
		void speak();
	};

} /* namespace altCat */

#endif /* ANIMALS_H_ */
