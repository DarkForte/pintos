#include "decimal.h"

decimal ToDec(int x){
	return x * (1 << NUMD);
}
int ToInt(decimal x){
	return (x >=0) ? (x + (1 << (NUMD - 1))) 
		/ (1 << NUMD) : (x- (1 << (NUMD - 1))) / (1 << NUMD);
}
decimal Add(decimal x,decimal y)
{
	return x + y;
}
decimal Sub(decimal x,decimal y)
{
	return x - y;
}
decimal Mul(decimal x,decimal y)
{
	return ( ( (int64_t)x) * (int64_t)y) / (1 << NUMD);
}
decimal Div(decimal x,decimal y)
{
	return ( ( (int64_t) x) * (1 << NUMD)) / y;
}