#ifndef LOGINLOG_H
#define LOGINLOG_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 登录日志
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LoginLog : public TaoDomain
{

public:
 virtual ~LoginLog() { }

  QString getTime() const;
  void setTime (QString time);
  QString getType() const;
  void setType (QString type);
  
  virtual void parseResponse();

private:
/**
 * @brief 用户登录或退出客户端的时间
 **/
  QString time;

/**
 * @brief 标志用户登录或退出。
0表示登陆，1表示退出。
 **/
  QString type;

};

#endif  /* LOGINLOG_H */
