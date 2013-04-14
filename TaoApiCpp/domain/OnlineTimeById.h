#ifndef ONLINETIMEBYID_H
#define ONLINETIMEBYID_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 在线时长
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class OnlineTimeById : public TaoDomain
{

public:
 virtual ~OnlineTimeById() { }

  qlonglong getOnlineTimes() const;
  void setOnlineTimes (qlonglong onlineTimes);
  QString getServiceStaffId() const;
  void setServiceStaffId (QString serviceStaffId);
  
  virtual void parseResponse();

private:
/**
 * @brief 客服在线时间长度（秒）
 **/
  qlonglong onlineTimes;

/**
 * @brief 客服人员ID
 **/
  QString serviceStaffId;

};

#endif  /* ONLINETIMEBYID_H */
