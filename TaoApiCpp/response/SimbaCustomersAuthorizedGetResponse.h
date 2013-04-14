#ifndef SIMBACUSTOMERSAUTHORIZEDGETRESPONSE_H
#define SIMBACUSTOMERSAUTHORIZEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 取得当前登录用户的授权账户列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCustomersAuthorizedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaCustomersAuthorizedGetResponse() { }

  QList<QString> getNicks() const;
  void setNicks (QList<QString> nicks);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 授权当前登录账户为代理账户的昵称列表
 **/
  QList<QString> nicks;

};

#endif
