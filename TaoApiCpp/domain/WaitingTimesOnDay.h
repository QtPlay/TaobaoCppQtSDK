#ifndef WAITINGTIMESONDAY_H
#define WAITINGTIMESONDAY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/WaitingTimeById.h>


/**
 * @brief 客户等待（客服）平均时长列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WaitingTimesOnDay : public TaoDomain
{

public:
 virtual ~WaitingTimesOnDay() { }

  QDateTime getWaitingDate() const;
  void setWaitingDate (QDateTime waitingDate);
  QList<WaitingTimeById> getWaitingTimeByIds() const;
  void setWaitingTimeByIds (QList<WaitingTimeById> waitingTimeByIds);
  
  virtual void parseResponse();

private:
/**
 * @brief 等待时长（统计）日期
 **/
  QDateTime waitingDate;

/**
 * @brief 等待时长列表
 **/
  QList<WaitingTimeById> waitingTimeByIds;

};

#endif  /* WAITINGTIMESONDAY_H */
