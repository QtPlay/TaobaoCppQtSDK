#ifndef FENXIAOCOOPERATIONTERMINATERESPONSE_H
#define FENXIAOCOOPERATIONTERMINATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 终止与分销商的合作关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoCooperationTerminateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoCooperationTerminateResponse() { }

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
