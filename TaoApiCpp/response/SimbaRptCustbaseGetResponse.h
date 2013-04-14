#ifndef SIMBARPTCUSTBASEGETRESPONSE_H
#define SIMBARPTCUSTBASEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 客户账户报表基础数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCustbaseGetResponse : public TaoResponse
{
public:
 virtual ~SimbaRptCustbaseGetResponse() { }

  QString getRptCustBaseList() const;
  void setRptCustBaseList (QString rptCustBaseList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 用户帐户结果
 **/
  QString rptCustBaseList;

};

#endif
