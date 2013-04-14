#ifndef FENXIAOPRODUCTCATADDREQUEST_H
#define FENXIAOPRODUCTCATADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductcatAddResponse.h>

/**
 * TOP API: 新增产品线
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductcatAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAgentCostPercent() const
;  void setAgentCostPercent (qlonglong agentCostPercent);

 qlonglong getDealerCostPercent() const
;  void setDealerCostPercent (qlonglong dealerCostPercent);

 QString getName() const
;  void setName (QString name);

 qlonglong getRetailHighPercent() const
;  void setRetailHighPercent (qlonglong retailHighPercent);

 qlonglong getRetailLowPercent() const
;  void setRetailLowPercent (qlonglong retailLowPercent);


  virtual FenxiaoProductcatAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 代销默认采购价比例，注意：100.00%，则输入为10000
 **/
  qlonglong agentCostPercent;

/**
 * @brief 经销默认采购价比例，注意：100.00%，则输入为10000
 **/
  qlonglong dealerCostPercent;

/**
 * @brief 产品线名称
 **/
  QString name;

/**
 * @brief 最高零售价比例，注意：100.00%，则输入为10000
 **/
  qlonglong retailHighPercent;

/**
 * @brief 最低零售价比例，注意：100.00%，则输入为10000
 **/
  qlonglong retailLowPercent;

};

#endif  /* FENXIAOPRODUCTCATADDREQUEST_H */
