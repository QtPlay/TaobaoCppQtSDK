#ifndef FENXIAOGRADESGETRESPONSE_H
#define FENXIAOGRADESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/FenxiaoGrade.h>


/**
 * @brief TOP RESPONSE API: 根据供应商ID，查询他的分销商等级信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradesGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoGradesGetResponse() { }

  QList<FenxiaoGrade> getFenxiaoGrades() const;
  void setFenxiaoGrades (QList<FenxiaoGrade> fenxiaoGrades);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 分销商等级信息
 **/
  QList<FenxiaoGrade> fenxiaoGrades;

/**
 * @brief 记录数
 **/
  qlonglong totalResults;

};

#endif
