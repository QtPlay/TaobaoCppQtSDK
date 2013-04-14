#ifndef TRIPJIPIAOAGENTORDERSPECIALCONFIRMRESPONSE_H
#define TRIPJIPIAOAGENTORDERSPECIALCONFIRMRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 国内机票订单接口，确认特殊产品能否支付
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderSpecialConfirmResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderSpecialConfirmResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 确认能否支付成功失败
 **/
  bool isSuccess;

};

#endif
