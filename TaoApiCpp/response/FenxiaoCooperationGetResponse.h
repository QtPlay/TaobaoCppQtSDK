#ifndef FENXIAOCOOPERATIONGETRESPONSE_H
#define FENXIAOCOOPERATIONGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Cooperation.h>


/**
 * @brief TOP RESPONSE API: 获取供应商的合作关系信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoCooperationGetResponse() { }

  QList<Cooperation> getCooperations() const;
  void setCooperations (QList<Cooperation> cooperations);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 合作分销关系
 **/
  QList<Cooperation> cooperations;

/**
 * @brief 结果记录数
 **/
  qlonglong totalResults;

};

#endif
