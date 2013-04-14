#ifndef TRIPJIPIAOAGENTORDERSUCCESSRESPONSE_H
#define TRIPJIPIAOAGENTORDERSUCCESSRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 淘宝机票代理商成功/解冻订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentOrderSuccessResponse : public TaoResponse
{
public:
 virtual ~TripJipiaoAgentOrderSuccessResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回操作成功失败信息
 **/
  bool isSuccess;

};

#endif
