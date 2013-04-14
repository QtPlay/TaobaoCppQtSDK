#ifndef POINTBUDGETGETRESPONSE_H
#define POINTBUDGETGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 查询已采购的集分宝余额，操作流程如下： 
1、申请支付宝增值包。 
2、申请支付宝应用上线时选择集分宝API。 
3、引导商家签约支付宝集分宝服务，地址为https://openapi.alipay.com/subscribe.htm?id=应用ID。 
4、引导商家对授予支付宝集分宝发放权限，地址为https://openauth.alipay.com/oauth2/authorize.htm?scope=p&client_id=应用ID 
5、引导授权的商家采购集分宝，地址为https://jf.alipay.com/aop/purchase.htm，进行集分宝采购。 
6、商家采购之后可以通过集分宝余额API（alipay.point.budget.get）查询商家的集分宝数量。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PointBudgetGetResponse : public TaoResponse
{
public:
 virtual ~PointBudgetGetResponse() { }

  qlonglong getBudgetAmount() const;
  void setBudgetAmount (qlonglong budgetAmount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 还可以发放的集分宝个数
 **/
  qlonglong budgetAmount;

};

#endif
