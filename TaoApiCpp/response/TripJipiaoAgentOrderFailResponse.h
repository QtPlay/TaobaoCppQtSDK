#ifndef TRIPJIPIAOAGENTORDERFAILRESPONSE_H
#define TRIPJIPIAOAGENTORDERFAILRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 国内机票代理商失败订单接口
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderFailResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderFailResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 失败订单操作成功失败
 **/
  bool isSuccess;

};

#endif
