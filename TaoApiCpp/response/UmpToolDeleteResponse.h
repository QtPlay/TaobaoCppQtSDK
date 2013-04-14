#ifndef UMPTOOLDELETERESPONSE_H
#define UMPTOOLDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除营销工具。当工具正在被使用的时候，是不能被删除的。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpToolDeleteResponse : public TaoResponse
{
public:
 virtual ~UmpToolDeleteResponse() { }

  bool getIsSuccess() const;
  void setIsSuccess (bool isSuccess);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 是否成功
 **/
  bool isSuccess;

};

#endif
