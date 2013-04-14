#ifndef WLBITEMAUTHORIZATIONADDRESPONSE_H
#define WLBITEMAUTHORIZATIONADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 添加商品的授权规则：添加规则之后代销商可以增加商品代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemAuthorizationAddResponse : public TaoResponse
{
public:
 virtual ~WlbItemAuthorizationAddResponse() { }

  QList<qlonglong> getRuleIdList() const;
  void setRuleIdList (QList<qlonglong> ruleIdList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 授权规则ID列表
 **/
  QList<qlonglong> ruleIdList;

};

#endif
