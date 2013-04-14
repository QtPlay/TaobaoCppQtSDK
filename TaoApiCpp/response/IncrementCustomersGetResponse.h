#ifndef INCREMENTCUSTOMERSGETRESPONSE_H
#define INCREMENTCUSTOMERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/AppCustomer.h>


/**
 * @brief TOP RESPONSE API: 提供查询应用为自身用户所开通的增量消息服务信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class IncrementCustomersGetResponse : public TaoResponse
{
public:
 virtual ~IncrementCustomersGetResponse() { }

  QList<AppCustomer> getAppCustomers() const;
  void setAppCustomers (QList<AppCustomer> appCustomers);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 查询到的用户开通信息
 **/
  QList<AppCustomer> appCustomers;

/**
 * @brief 查询到的开通增量服务的用户数
 **/
  qlonglong totalResults;

};

#endif
