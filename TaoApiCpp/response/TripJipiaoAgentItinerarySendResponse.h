#ifndef TRIPJIPIAOAGENTITINERARYSENDRESPONSE_H
#define TRIPJIPIAOAGENTITINERARYSENDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 国内机票代理商行程单信息回填
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentItinerarySendResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentItinerarySendResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 成功或者失败
 **/
  bool isSuccess;

};

#endif
