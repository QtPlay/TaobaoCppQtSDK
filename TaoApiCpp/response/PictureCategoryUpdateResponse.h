#ifndef PICTURECATEGORYUPDATERESPONSE_H
#define PICTURECATEGORYUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>


/**
 * @brief TOP RESPONSE API: 更新图片分类的名字，或者更新图片分类的父分类（即分类移动）。只能移动2级分类到非2级分类，默认分类和1级分类不可移动。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategoryUpdateResponse : public TaoResponse
{
public:
 virtual ~PictureCategoryUpdateResponse() { }

  bool getDone() const;
  void setDone (bool done);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 更新图片分类是否成功
 **/
  bool done;

};

#endif
