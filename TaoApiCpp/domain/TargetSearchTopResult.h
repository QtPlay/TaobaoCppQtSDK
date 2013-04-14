#ifndef TARGETSEARCHTOPRESULT_H
#define TARGETSEARCHTOPRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief TargetSearchTopResult
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TargetSearchTopResult : public TaoDomain
{

public:
 virtual ~TargetSearchTopResult() { }

  QString getField() const;
  void setField (QString field);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  QString getResultData() const;
  void setResultData (QString resultData);
  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  
  virtual void parseResponse();

private:
/**
 * @brief 查询的指标名称
 **/
  QString field;

/**
 * @brief 分页大小
 **/
  qlonglong pageSize;

/**
 * @brief 所查询的指标数据的结果
 **/
  QString resultData;

/**
 * @brief 分页的数据总数
 **/
  qlonglong totalCount;

};

#endif  /* TARGETSEARCHTOPRESULT_H */
