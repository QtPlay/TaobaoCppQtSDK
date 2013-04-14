#ifndef USERCONTRACTGETRESPONSE_H
#define USERCONTRACTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AlipayContract.h>


/**
 * @brief TOP RESPONSE API: 获取支付宝用户订购信息。在不确认用户对应用是否订购的时候，可以调用此API查询。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserContractGetResponse : public TaoResponse
{
public:
 virtual ~UserContractGetResponse() { }

  AlipayContract getAlipayContract() const;
  void setAlipayContract (AlipayContract alipayContract);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付宝用户订购信息
 **/
  AlipayContract alipayContract;

};

#endif
