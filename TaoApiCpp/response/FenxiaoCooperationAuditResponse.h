#ifndef FENXIAOCOOPERATIONAUDITRESPONSE_H
#define FENXIAOCOOPERATIONAUDITRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 合作授权审批
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationAuditResponse : public TaoResponse
{
public:
 virtual ~FenxiaoCooperationAuditResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作是否成功
 **/
  bool isSuccess;

};

#endif
