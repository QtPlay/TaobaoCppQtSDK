#ifndef FENXIAOREQUISITIONSGETRESPONSE_H
#define FENXIAOREQUISITIONSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Requisition.h>


/**
 * @brief TOP RESPONSE API: 合作申请查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoRequisitionsGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoRequisitionsGetResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);  QList<Requisition> getRequisitions() const;
  void setRequisitions (QList<Requisition> requisitions);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作是否成功
 **/
  bool isSuccess;

/**
 * @brief 合作申请
 **/
  QList<Requisition> requisitions;

/**
 * @brief 结果记录数
 **/
  qlonglong totalResults;

};

#endif
