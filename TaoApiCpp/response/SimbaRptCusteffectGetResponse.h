#ifndef SIMBARPTCUSTEFFECTGETRESPONSE_H
#define SIMBARPTCUSTEFFECTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 用户账户报表效果数据查询（只有汇总数据，无分类数据）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCusteffectGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptCusteffectGetResponse() { }

  QString getRptCustEffectList() const;
  void setRptCustEffectList (QString rptCustEffectList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 账户效果数据返回结果
 **/
  QString rptCustEffectList;

};

#endif
