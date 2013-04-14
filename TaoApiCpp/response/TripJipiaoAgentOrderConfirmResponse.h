#ifndef TRIPJIPIAOAGENTORDERCONFIRMRESPONSE_H
#define TRIPJIPIAOAGENTORDERCONFIRMRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 国内机票代理商确认订单接口
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderConfirmResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderConfirmResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 确认成功失败
 **/
  bool isSuccess;

};

#endif
