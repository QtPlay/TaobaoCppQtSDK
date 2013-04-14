#ifndef TIMEGETRESPONSE_H
#define TIMEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QDateTime>


/**
 * @brief TOP RESPONSE API: 获取淘宝系统当前时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TimeGetResponse : public TaoResponse
{
public:
 virtual ~TimeGetResponse() { }

  QDateTime getTime() const;
  void setTime (QDateTime time);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 淘宝系统当前时间。格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime time;

};

#endif
