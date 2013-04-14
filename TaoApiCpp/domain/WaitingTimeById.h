#ifndef WAITINGTIMEBYID_H
#define WAITINGTIMEBYID_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 平均等待时长
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WaitingTimeById : public TaoDomain
{

public:
 virtual ~WaitingTimeById() { }

  qlonglong getAvgWaitingTimes() const;
  void setAvgWaitingTimes (qlonglong avgWaitingTimes);
  QString getServiceStaffId() const;
  void setServiceStaffId (QString serviceStaffId);
  
  virtual void parseResponse();

private:
/**
 * @brief 平均等待时间长度（秒）
 **/
  qlonglong avgWaitingTimes;

/**
 * @brief 客服人员ID
 **/
  QString serviceStaffId;

};

#endif  /* WAITINGTIMEBYID_H */
