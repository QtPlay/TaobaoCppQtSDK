#ifndef LOGINUSER_H
#define LOGINUSER_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 登录分销用户信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LoginUser : public TaoDomain
{

public:
 virtual ~LoginUser() { }

  QDateTime getCreateTime() const;
  void setCreateTime (QDateTime createTime);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserType() const;
  void setUserType (QString userType);
  
  virtual void parseResponse();

private:
/**
 * @brief 入驻时间
 **/
  QDateTime createTime;

/**
 * @brief 会员NICK
 **/
  QString nick;

/**
 * @brief 分销用户ID
 **/
  qlonglong userId;

/**
 * @brief 分销用户类型(1:分销商，2:供应商，3:非分销平台用户)
 **/
  QString userType;

};

#endif  /* LOGINUSER_H */
