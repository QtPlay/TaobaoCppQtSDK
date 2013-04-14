#ifndef FENXIAOGRADEUPDATERESPONSE_H
#define FENXIAOGRADEUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 修改等级
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoGradeUpdateResponse : public TaoResponse
{
public:
 virtual ~FenxiaoGradeUpdateResponse() { }

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
