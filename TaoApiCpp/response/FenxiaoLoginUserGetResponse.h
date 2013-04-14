#ifndef FENXIAOLOGINUSERGETRESPONSE_H
#define FENXIAOLOGINUSERGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/LoginUser.h>


/**
 * @brief TOP RESPONSE API: 获取用户登录信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoLoginUserGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoLoginUserGetResponse() { }

  LoginUser getLoginUser() const;
  void setLoginUser (LoginUser loginUser);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 登录用户信息
 **/
  LoginUser loginUser;

};

#endif
