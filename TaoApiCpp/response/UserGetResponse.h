#ifndef USERGETRESPONSE_H
#define USERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/AlipayUserDetail.h>


/**
 * @brief TOP RESPONSE API: 查询支付宝用户信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserGetResponse : public TaoResponse
{
public:
 virtual ~UserGetResponse() { }

  AlipayUserDetail getAlipayUserDetail() const;
  void setAlipayUserDetail (AlipayUserDetail alipayUserDetail);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支付宝用户信息
 **/
  AlipayUserDetail alipayUserDetail;

};

#endif
