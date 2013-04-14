#ifndef STAFFEVALSTATBYID_H
#define STAFFEVALSTATBYID_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Evaluation.h>


/**
 * @brief 客服评价统计
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class StaffEvalStatById : public TaoDomain
{

public:
 virtual ~StaffEvalStatById() { }

  QList<Evaluation> getEvaluations() const;
  void setEvaluations (QList<Evaluation> evaluations);
  QString getServiceStaffId() const;
  void setServiceStaffId (QString serviceStaffId);
  
  virtual void parseResponse();

private:
/**
 * @brief 客服评价
 **/
  QList<Evaluation> evaluations;

/**
 * @brief 客服人员ID
 **/
  QString serviceStaffId;

};

#endif  /* STAFFEVALSTATBYID_H */
