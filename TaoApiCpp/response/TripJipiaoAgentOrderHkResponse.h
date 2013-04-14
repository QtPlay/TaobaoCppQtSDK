#ifndef TRIPJIPIAOAGENTORDERHKRESPONSE_H
#define TRIPJIPIAOAGENTORDERHKRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 国内机票代理商手工hk订单（未付款前，手工填写pnr）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderHkResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderHkResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 手工HK成功失败
 **/
  bool isSuccess;

};

#endif
