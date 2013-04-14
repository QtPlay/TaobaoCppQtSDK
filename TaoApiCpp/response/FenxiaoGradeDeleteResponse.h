#ifndef FENXIAOGRADEDELETERESPONSE_H
#define FENXIAOGRADEDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradeDeleteResponse : public TaoResponse
{
public:
 virtual ~FenxiaoGradeDeleteResponse() { }

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
