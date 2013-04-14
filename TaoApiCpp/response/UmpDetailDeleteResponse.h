#ifndef UMPDETAILDELETERESPONSE_H
#define UMPDETAILDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 删除活动详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpDetailDeleteResponse : public TaoResponse
{
public:
 virtual ~UmpDetailDeleteResponse() { }

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
