#ifndef FENXIAOCOOPERATIONUPDATERESPONSE_H
#define FENXIAOCOOPERATIONUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 供应商更新合作的分销商等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoCooperationUpdateResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新结果成功失败
 **/
  bool isSuccess;

};

#endif
