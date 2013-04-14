#ifndef MICROPAYORDERFREEZEPAYURLGETRESPONSE_H
#define MICROPAYORDERFREEZEPAYURLGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 用户创建一笔支付订单之后,使用此接口获取支付冻结金的url来支付冻结金
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class MicropayOrderFreezepayurlGetResponse : public TaoResponse
{
public:
 virtual ~MicropayOrderFreezepayurlGetResponse() { }

  QString getPayFreezeUrl() const;
  void setPayFreezeUrl (QString payFreezeUrl);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付冻结金的地址
 **/
  QString payFreezeUrl;

};

#endif
