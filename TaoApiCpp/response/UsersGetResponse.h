#ifndef USERSGETRESPONSE_H
#define USERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/User.h>


/**
 * @brief TOP RESPONSE API: 传入多个淘宝会员帐号返回多个用户公开信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UsersGetResponse : public TaoResponse
{
public:
 virtual ~UsersGetResponse() { }

  QList<User> getUsers() const;
  void setUsers (QList<User> users);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 用户信息列表
 **/
  QList<User> users;

};

#endif
