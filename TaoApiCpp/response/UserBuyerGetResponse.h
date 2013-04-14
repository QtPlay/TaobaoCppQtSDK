#ifndef USERBUYERGETRESPONSE_H
#define USERBUYERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/User.h>


/**
 * @brief TOP RESPONSE API: 查询买家信息API
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserBuyerGetResponse : public TaoResponse
{
public:
 virtual ~UserBuyerGetResponse() { }

  User getUser() const;
  void setUser (User user);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 只返回user_id,nick,sex,buyer_credit,avatar,has_shop,vip_info参数
 **/
  User user;

};

#endif
