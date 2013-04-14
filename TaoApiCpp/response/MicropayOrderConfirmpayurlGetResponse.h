#ifndef MICROPAYORDERCONFIRMPAYURLGETRESPONSE_H
#define MICROPAYORDERCONFIRMPAYURLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SinglePayDetail.h>


/**
 * @brief TOP RESPONSE API: 创建并支付冻结单之后，使用此接口获取有密支付的url 
这个接口调用的前提是创建冻结金的参数信息pay_confirm=PAY_PASSWORD
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderConfirmpayurlGetResponse : public TaoResponse
{
public:
 virtual ~MicropayOrderConfirmpayurlGetResponse() { }

  SinglePayDetail getSinglePayDetail() const;
  void setSinglePayDetail (SinglePayDetail singlePayDetail);
  virtual void parseNormalResponse();

 private:
/**
 * @brief SinglePayDetail信息
 **/
  SinglePayDetail singlePayDetail;

};

#endif
