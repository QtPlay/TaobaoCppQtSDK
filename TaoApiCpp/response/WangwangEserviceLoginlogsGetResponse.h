#ifndef WANGWANGESERVICELOGINLOGSGETRESPONSE_H
#define WANGWANGESERVICELOGINLOGSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/LoginLog.h>


/**
 * @brief TOP RESPONSE API: 通过用户id查询用户自己或者子账户的登录日志： 
主账号可以查询自己和店铺子账户的登录日志（查询时需要输入子账号，多个用，隔开） 
组管理员可以查询自己和组内子账号的登录日志（查询时需要输入子账号，多个用，隔开） 
非组管理员的子账户只能查询自己的登录日志
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceLoginlogsGetResponse : public TaoResponse
{
public:
 virtual ~WangwangEserviceLoginlogsGetResponse() { }

  qlonglong getCount() const;
  void setCount (qlonglong count);  QList<LoginLog> getLoginlogs() const;
  void setLoginlogs (QList<LoginLog> loginlogs);  QString getUserId() const;
  void setUserId (QString userId);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 在指定时间段登录日志的条数
 **/
  qlonglong count;

/**
 * @brief 登录日志具体信息
 **/
  QList<LoginLog> loginlogs;

/**
 * @brief 被查询的用户id
 **/
  QString userId;

};

#endif
