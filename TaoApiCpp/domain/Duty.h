#ifndef DUTY_H
#define DUTY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 子账号职务信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Duty : public TaoDomain
{

public:
 virtual ~Duty() { }

  qlonglong getDutyId() const;
  void setDutyId (qlonglong dutyId);
  qlonglong getDutyLevel() const;
  void setDutyLevel (qlonglong dutyLevel);
  QString getDutyName() const;
  void setDutyName (QString dutyName);
  
  virtual void parseResponse();

private:
/**
 * @brief 职务ID
 **/
  qlonglong dutyId;

/**
 * @brief 职务级别
 **/
  qlonglong dutyLevel;

/**
 * @brief 职务名称
 **/
  QString dutyName;

};

#endif  /* DUTY_H */
