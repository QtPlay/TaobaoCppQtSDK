#ifndef ONLINETIMESONDAY_H
#define ONLINETIMESONDAY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/OnlineTimeById.h>


/**
 * @brief 某天的客服在线时长列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class OnlineTimesOnDay : public TaoDomain
{

public:
 virtual ~OnlineTimesOnDay() { }

  QDateTime getOnlineDate() const;
  void setOnlineDate (QDateTime onlineDate);
  QList<OnlineTimeById> getOnlineTimeByIds() const;
  void setOnlineTimeByIds (QList<OnlineTimeById> onlineTimeByIds);
  
  virtual void parseResponse();

private:
/**
 * @brief 在线日期
 **/
  QDateTime onlineDate;

/**
 * @brief 在线时长列表
 **/
  QList<OnlineTimeById> onlineTimeByIds;

};

#endif  /* ONLINETIMESONDAY_H */
