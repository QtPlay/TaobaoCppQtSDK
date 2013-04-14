#ifndef STAFFEVALSTATONDAY_H
#define STAFFEVALSTATONDAY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/StaffEvalStatById.h>


/**
 * @brief 客服评价统计列表(按天)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class StaffEvalStatOnDay : public TaoDomain
{

public:
 virtual ~StaffEvalStatOnDay() { }

  QDateTime getEvalDate() const;
  void setEvalDate (QDateTime evalDate);
  QList<StaffEvalStatById> getStaffEvalStatByIds() const;
  void setStaffEvalStatByIds (QList<StaffEvalStatById> staffEvalStatByIds);
  
  virtual void parseResponse();

private:
/**
 * @brief 评价产生的日期
 **/
  QDateTime evalDate;

/**
 * @brief 客服评价统计列表
 **/
  QList<StaffEvalStatById> staffEvalStatByIds;

};

#endif  /* STAFFEVALSTATONDAY_H */
