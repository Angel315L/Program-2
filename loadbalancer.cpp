/* loadbalancer.cpp
 *
 * Manage the CPU load by assigning next job to CPU with the least load
 */

#include "loadbalancer.h"

int loadbalancer::getTime()
{
   return systemTime;
}

void loadbalancer::incTime()
{
    systemTime++;
}
  
void loadbalancer::addRequest(request r)
{
 requestqueue.push(r);
   incTime();
 
}
  
request loadbalancer::getRequest()
{
   incTime();
   if (!requestqueue.empty()) {
      request r = requestqueue.front(); //queue
      //request r = requestQueue.top(); // priority_queue, stack
      requestqueue.pop();
      return r;
   }






   // ignore warning here about no return value
}

bool loadbalancer::isRequestQueueEmpty()
{
  return requestqueue.empty();
} 

int loadbalancer::getSize()
{
  
} 
