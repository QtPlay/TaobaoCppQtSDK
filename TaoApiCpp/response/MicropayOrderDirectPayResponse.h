#ifndef MICROPAYORDERDIRECTPAYRESPONSE_H
#define MICROPAYORDERDIRECTPAYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SinglePayDetail.h>


/**
 * @brief TOP RESPONSE API: 1.	创建并支付一笔冻结金后，调用此接口 
2.	这个接口调用的前提是创建冻结金的参数信息pay_confirm=NO_CONFIRM
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderDirectPayResponse : public TaoResponse
{
public:
 virtual ~MicropayOrderDirectPayResponse() { }

  SinglePayDetail getSinglePayDetail() const;
  void setSinglePayDetail (SinglePayDetail singlePayDetail);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 单笔直接支付返回结果
 **/
  SinglePayDetail singlePayDetail;

};

#endif
